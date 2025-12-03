#include <iostream>
#include <iomanip>

int main() {

    std::string title = "Welcome to the Quiz Game Program!";
    std::string separator = std::string(title.length(), '-');
    std::cout << separator << '\n' << title << '\n' << separator << "\n\n";

    // Quiz Game questions
    std::string questions[] = {
        // Geography
        "What is the national flower of Japan?",
        "In which city would you find Table Mountain?",
        "Where is the Sargasso Sea located?",
        "What is the capital of New Zealand?",
        
        // Science
        "What is the first square number?",
        "What is the chemical symbol for Tungsten?",
        "What is the most abundant gas in the Earth's atmosphere?",
        "What is the name of the pet dinosaur on \"The Flintstones\"?",
        
        // History
        "Who was the first person to visit the moon?",
        "Who was Henry VIII's first wife?",
        "At the Battle of Waterloo, which Emperor was defeated?",
        "In what year did The Bahamas gain independence from Great Britain?",

        // Pop culture
        "Which member of One Direction released the debut single \"Sign of the Times\"?",
        "Who played the \"Joker\" in the 2008 film \"The Dark Knight\"?",
        "Who is the lead singer of Culture Club?",
        "In the film \"Finding Nemo,\" what type of fish is Nemo?",

        // General Knowledge
        "How many stripes are on the US flag?",
        "What is the only food that can never go bad?",
        "What is the best-selling book of all time?",
        "What eight-sided shape is called?"
    };

    // Questions' options
    std::string options[][4] = {
        // Geography
        { "A. Lotus", "B. Rose", "C. Cherry Blossom", "D. Orchid" },                // C ✔
        { "A. Cape Town", "B. Sydney", "C. Rio de Janeiro", "D. Nairobi" },         // A ✔
        { "A. Indian Ocean", "B. North Atlantic Ocean", "C. Pacific Ocean", "D. Arctic Ocean" }, // B ✔
        { "A. Auckland", "B. Wellington", "C. Christchurch", "D. Dunedin" },        // B ✔

        // Science
        { "A. 0", "B. 1", "C. 2", "D. 4" },                                         // B ✔
        { "A. Tu", "B. Wg", "C. Tn", "D. W" },                                      // D ✔
        { "A. Oxygen", "B. Carbon Dioxide", "C. Nitrogen", "D. Hydrogen" },        // C ✔
        { "A. Spike", "B. Dino", "C. Rex", "D. Bruno" },                            // B ✔

        // History
        { "A. Neil Armstrong", "B. Buzz Aldrin", "C. Yuri Gagarin", "D. Michael Collins" }, // A ✔
        { "A. Anne Boleyn", "B. Catherine of Aragon", "C. Jane Seymour", "D. Anne of Cleves" }, // B ✔
        { "A. Julius Caesar", "B. Napoleon Bonaparte", "C. Alexander the Great", "D. Kaiser Wilhelm II" }, // B ✔
        { "A. 1965", "B. 1973", "C. 1980", "D. 1957" },                              // B ✔

        // Pop culture
        { "A. Harry Styles", "B. Zayn Malik", "C. Liam Payne", "D. Louis Tomlinson" }, // A ✔
        { "A. Joaquin Phoenix", "B. Jack Nicholson", "C. Jared Leto", "D. Heath Ledger" }, // D ✔
        { "A. Boy George", "B. George Michael", "C. Mick Jagger", "D. Sting" },        // A ✔
        { "A. Goldfish", "B. Clownfish", "C. Angelfish", "D. Butterflyfish" },         // B ✔

        // General Knowledge
        { "A. 10", "B. 11", "C. 13", "D. 15" },                                       // C ✔
        { "A. Honey", "B. Salt", "C. Rice", "D. Sugar" },                             // A ✔
        { "A. The Bible", "B. Don Quixote", "C. The Quran", "D. The Lord of the Rings" }, // A ✔
        { "A. Hexagon", "B. Pentagon", "C. Octagon", "D. Decagon" }                   // C ✔
    };

    // Correct answers (char) for a question
    char answers[] = {
        // Geography
        'C', 'A', 'B', 'B',

        // Science
        'B', 'D', 'C', 'B',

        // History
        'A', 'B', 'B', 'B',

        // Pop Culture
        'A', 'D', 'A', 'B',

        // General Knowledge
        'C', 'A', 'A', 'C'
    };

    // Correct answer index for a question
    int answerIndex[] = {
        // Geography
        2, 0, 1, 1,

        // Science
        1, 3, 2, 1,

        // History
        0, 1, 1, 1,

        // Pop Culture
        0, 3, 0, 1,

        // General Knowledge
        2, 0, 0, 2
    };

    // Calculate the number of questions
    int size = sizeof(questions) / sizeof(questions[0]); 
    
    // Calculate the number of options
    int size_options = sizeof(options[0]) / sizeof(options[0][0]);
    int last_options_index = size_options - 1;

    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        if (i > 0) {
            std::cout << '\n' << separator << "\n\n";
        }
        std::cout << "Question #" << (i+1) << ": " << questions[i] << '\n';

        for (int j = 0; j < size_options; j++) {
            std::cout << options[i][j];
            if (j < last_options_index) {
                std::cout << "  |  ";
            }
        }
        std::cout << "\n\n";
        std::cout << "Enter your answer (A, B, C, D): ";
        std::cin >> guess;

        // Make the user guess "UPPERCASE"
        guess = toupper(guess);

        if (guess == answers[i]) {
            score += 1;
            std::cout << "Correct! New score = " << score << '\n';
        }
        else {
            std::cout << "Wrong! The correct answer is " << options[i][ answerIndex[i] ] << '\n';
        }
    }

    std::cout << '\n' << separator << "\n";
    std::cout << "# RESULTS" << '\n' << separator << "\n\n";
    std::cout << "The number of questions: " << size << '\n';
    std::cout << "Correct answers: " << score << '\n';

    std::cout << "Success Rate: " << std::fixed << std::setprecision(2);
    std::cout << (score / (double)size) * 100 << "%\n";

    return 0;
}