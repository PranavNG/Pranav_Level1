#include <stdio.h>
#include <string.h>

struct payroll
{
    char name[100];
    int min;
    float hr;
    float hrwage;
    float gp;
};
typedef struct payroll worker;

worker input_one()
{
    worker Worker;
    scanf("%s %f", &Worker.name, &Worker.hrwage);

    return Worker;
}

int find_worker(int n, worker workers[n], char name[])
{
    for (int i = 0; i < n; i++)
    {
        if (!strcmp(name, workers[i].name))
            return i;
    }

    return 0;
}

void input_n(int n, worker workers[n])
{
    for (int i = 0; i < n; i++)
        workers[i] = input_one();
}

void input_cards(int totalWorkers, worker workers[totalWorkers])
{
    int ent, mint, index;
    char name[100];

    scanf("%d", &ent);

    for (int i = 0; i < ent; i++)
    {
        scanf("%s %d", &name, &mint);
        index = find_worker(totalWorkers, workers, name);
        workers[index].min += mint;
    }
}

float compute_hr(float minutes)
{
    return minutes / 60;
}

void compute_one(worker *w)
{
    w->hr = compute_hr(w->min);
    
    if (w->hr <= 40.00)
        w->gp = w->hrwage * w->hr;
    else
        w->gp = (w->hrwage * 40.00) + (1.5 * (w->hrwage *	 (w->hr - 40.00)));
}

void compute_n(int n, worker workers[n])
{
    for (int i = 0; i < n; i++)
        compute_one(&workers[i]);
}

void output_one(worker worker)
{
    printf("%s: %.2f hours, $%.2f\n", worker.name, worker.hr, worker.gp);
}

void output_n(int n, worker workers[n])
{
    for (int i = 0; i < n; i++)
    {
    	if(workers[i].gp !=0)
        	output_one(workers[i]);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    worker w[n];
    input_n(n, w);
    input_cards(n, w);
    compute_n(n, w);
    output_n(n, w);

    return 0;
}	
