create table sinlodaf
(
silddate    char(6),
sildirp     decimal(10,0),
sildilp     decimal(10,0),
sildbolp    decimal(10,0),
sildslo     decimal(10,0),
sildnslo    decimal(10,0),
sildslr     decimal(10,0),
sildnslr    decimal(10,0),
sildiri     decimal(10,0),
sildslrt    decimal(10,0),
sildinv     decimal(10,0),
sildrql     decimal(10,0),
sildzis     decimal(10,0),
sildgen     char(10),
sildtpo     decimal(10,0),
sildspa     char(18),
lf          char(1)
);
create unique index sinloda1 on sinlodaf
(
silddate
);
revoke all on sinlodaf from public ; 
grant select on sinlodaf to public ; 
