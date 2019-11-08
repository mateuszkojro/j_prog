#ifndef MEASURE_TIME_H
#define MEASURE_TIME_H


class measure_time
{
    public:

        template  <typename T> int exec_time(T a, T(*func)(T));
        template  <typename T> void compare_exec_time(T a, T(*func1)(T), T(*func2)(T));

    protected:

    private:
};

#endif // MEASURE_TIME_H
