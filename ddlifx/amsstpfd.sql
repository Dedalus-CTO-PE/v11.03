create table amsstpaf
(
  amststk     char(5) default ' ' not null,
  amstbld     char(3) default ' ' not null,
  amstloc     char(6) default ' ' not null,
  amstreg     char(2) default ' ' not null,
  amstass     char(12) default ' ' not null,
  amstgdt     char(8) default ' ' not null,
  amstpdt     char(8) default ' ' not null,
  amstcby     char(10) default ' ' not null,
  amstcom     char(30) default ' ' not null,
  amstlcm     char(30) default ' ' not null,
  amstpop     char(4) default ' ' not null,
  amstpda     char(8) default ' ' not null,
  amstptm     char(5) default ' ' not null,
  amstur1     char(30) default ' ' not null,
  amstur2     char(30) default ' ' not null,
  amstud1     char(8) default ' ' not null,
  amstud2     char(8) default ' ' not null,
  amstuy1     char(1) default ' ' not null,
  amstuy2     char(1) default ' ' not null,
  amstspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsstpa1 on amsstpaf
(
amststk,
amstbld,
amstloc,
amstreg,
amstass
);
create unique index amsstpa2 on amsstpaf
(
amstreg,
amstass,
amststk
);
revoke all on amsstpaf from public ; 
grant select on amsstpaf to public ; 
