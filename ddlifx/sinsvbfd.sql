create table sinsvbaf
(
sivbcod     char(4),
sivblin     char(3),
sivbcom     char(60),
sivbspa     char(20),
lf          char(1)
);
create unique index sinsvba1 on sinsvbaf
(
sivbcod,
sivblin
);
revoke all on sinsvbaf from public ; 
grant select on sinsvbaf to public ; 
