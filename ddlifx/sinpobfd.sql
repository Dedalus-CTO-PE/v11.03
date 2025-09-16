create table sinpobaf
(
sipbpon     char(7),
sipblin     char(3),
sipbcom     char(60),
sipbspa     char(20),
lf          char(1)
);
create unique index sinpoba1 on sinpobaf
(
sipbpon,
sipblin
);
revoke all on sinpobaf from public ; 
grant select on sinpobaf to public ; 
