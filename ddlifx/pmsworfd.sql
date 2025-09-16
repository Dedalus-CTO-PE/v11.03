create table pmsworaf
(
pmwoadmn    char(8),
pmwowdi1    char(35),
pmwowdi2    char(35),
pmwowdi3    char(35),
pmwoedat    char(8),
pmwocdat    char(8),
pmwoctim    char(8),
pmwocuid    char(10),
pmwoudat    char(8),
pmwoutim    char(8),
pmwouuid    char(10),
pmwoedtm    char(8),
pmwodpst    char(3),
pmwocord    char(10),
pmwoddes    char(5),
pmwodtrn    char(8),
pmwoudf1    char(3),
pmwoudf2    char(3),
pmwoudf3    char(3),
pmwoudf4    char(3),
pmwoudf5    char(3),
pmwoudf6    char(3),
pmwoudf7    char(3),
pmwoudf8    char(3),
pmwocext    char(4),
pmwospar    char(46),
lf          char(1)
);
create unique index pmswora1 on pmsworaf
(
pmwoadmn
);
create unique index pmswora2 on pmsworaf
(
pmwoedat,
pmwoadmn
);
revoke all on pmsworaf from public ; 
grant select on pmsworaf to public ; 
