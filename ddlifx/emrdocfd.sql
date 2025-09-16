create table emrdocaf
(
  emdodoc     char(10) default ' ' not null,
  emdodnm     char(25) default ' ' not null,
  emdodin     char(3) default ' ' not null,
  emdoact     char(1) default ' ' not null,
  emdospa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index emrdoca1 on emrdocaf
(
emdodoc
);
create unique index emrdoca2 on emrdocaf
(
emdodnm,
emdodoc
);
revoke all on emrdocaf from public ; 
grant select on emrdocaf to public ; 
