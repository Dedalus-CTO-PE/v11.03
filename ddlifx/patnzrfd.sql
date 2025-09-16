create table patnzraf
(
nzrresi     char(3),
nzrcomp     char(3),
nzrtype     char(3),
nzrcprdy    decimal(14,2),
nzrcpdes    char(20),
nzrcerdy    decimal(14,2),
nzrcedes    char(20),
nzrcspar    char(14),
lf          char(1)
);
create unique index patnzra1 on patnzraf
(
nzrresi,
nzrcomp,
nzrtype
);
revoke all on patnzraf from public ; 
grant select on patnzraf to public ; 
