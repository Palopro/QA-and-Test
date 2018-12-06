class human {
    public:
        // Конструктор класса human
        human(std::string last_name, std::string name, std::string second_name)
        {
            this->last_name = last_name;
            this->name = name;
            this->second_name = second_name;
        }

        // Получение ФИО человека
        std::string get_full_name()
        {
            std::ostringstream full_name;
            full_name << this->last_name << " "
                << this->name << " "
                << this->second_name;
            return full_name.str();
        }

    private:
        std::string name; // имя
        std::string last_name; // фамилия
        std::string second_name; // отчество
};

class student : public human {
    public:
        // Конструктор класса Student
        student(
            std::string last_name,
            std::string name,
            std::string second_name,
            std::vector<int> scores
        ) : human(
            last_name,
            name,
            second_name
        ) {
            this->scores = scores;
        }

        // Получение среднего балла студента
        float get_average_score()
        {
            // Общее количество оценок
            unsigned int count_scores = this->scores.size();
            // Сумма всех оценок студента
            unsigned int sum_scores = 0;
            // Средний балл
            float average_score;

            for (unsigned int i = 0; i < count_scores; ++i) {
                sum_scores += this->scores[i];
            }

            average_score = (float) sum_scores / (float) count_scores;
            return average_score;
        }

    private:
        // Оценки студента
        std::vector<int> scores;
};

class teacher : public human {
    // Конструктор класса teacher
    public:
        teacher(
            std::string last_name,
            std::string name,
            std::string second_name,
            // Количество учебных часов за семетр у преподавателя
            unsigned int work_time
        ) : human(
            last_name,
            name,
            second_name
        ) {
            this->work_time = work_time;
        }

        // Получение количества учебных часов
        unsigned int get_work_time()
        {
            return this->work_time;
        }

    private:
        // Учебные часы
        unsigned int work_time;
};