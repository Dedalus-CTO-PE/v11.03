create table apstcmaf
(
  aptccrd     char(5) default ' ' not null,
  aptcdtrc    char(8) default ' ' not null,
  aptcuniq    char(3) default ' ' not null,
  aptcline    char(3) default ' ' not null,
  aptccom     char(70) default ' ' not null,
  aptcspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index apstcma1 on apstcmaf
(
aptccrd,
aptcdtrc,
aptcuniq,
aptcline
);
revoke all on apstcmaf from public ; 
grant select on apstcmaf to public ; 
