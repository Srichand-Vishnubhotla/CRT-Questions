def job_scheduling(jobs):
    jobs.sort(key=lambda x:x[2],reverse=True)
    md=max(job[1]for job in jobs)
    slots=[False]*(md+1) ##0 is always false bcz deadline starts from 1 and max is 3 
    profit=0
    jobs_names=[]
    for job in jobs:
        name,d,p=job
        for i in range(d,0,-1):
            if not slots[i]:
                slots[i]=True
                jobs_names.append(name)
                profit+=p
                break
    
    print(len(jobs_names))
    print(jobs_names)
    print(profit)

names=['A','B','C','D','E']
deadlines=[2,1,2,1,3]
profit=[100,19,27,25,15]
jobs=list(zip(names,deadlines,profit))

job_scheduling(jobs)