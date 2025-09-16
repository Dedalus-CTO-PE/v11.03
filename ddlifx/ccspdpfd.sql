create table ccspdpaf
(
  ccpdhcd     char(2) default ' ' not null,
  ccpddpt     char(8) default ' ' not null,
  ccpdpcd     char(8) default ' ' not null,
  ccpdgcd     char(4) default ' ' not null,
  ccpddes     char(35) default ' ' not null,
  ccpdstc     decimal(16,4) default 0 not null,
  ccpdrvi     decimal(18,6) default 0 not null,
  ccpdseq     char(3) default ' ' not null,
  ccpdsus     char(1) default ' ' not null,
  ccpdspa     char(26) default ' ' not null,
  lf          char(1)
);
create unique index ccspdpa1 on ccspdpaf
(
ccpdhcd,
ccpddpt,
ccpdpcd
);
create unique index ccspdpa2 on ccspdpaf
(
ccpdhcd,
ccpddpt,
ccpdgcd,
ccpdpcd
);
create unique index ccspdpa3 on ccspdpaf
(
ccpdpcd,
ccpdhcd,
ccpddpt
);
create unique index ccspdpa4 on ccspdpaf
(
ccpdhcd,
ccpddpt,
ccpdseq,
ccpdpcd
);
revoke all on ccspdpaf from public ; 
grant select on ccspdpaf to public ; 
