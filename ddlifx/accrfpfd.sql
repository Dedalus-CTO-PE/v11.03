create table accrfpaf
(
acrfaccn    char(20),
dacrfcnt    char(3),
acrfrprt    char(3),
acrfoprt    char(80),
acrfstc1    char(100),
acrfstc2    char(100),
acrfstc3    char(50),
acrfspar    char(30),
lf          char(1)
);
create unique index accrfpa1 on accrfpaf
(
acrfaccn,
dacrfcnt
);
revoke all on accrfpaf from public ; 
grant select on accrfpaf to public ; 
