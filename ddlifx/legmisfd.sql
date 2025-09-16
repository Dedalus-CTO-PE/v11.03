create table legmissf
(
  dlaadmno    char(8) default ' ' not null,
  laurno      char(8) default ' ' not null,
  ladate      char(8) default ' ' not null,
  latime      char(8) default ' ' not null,
  dlastat     char(1) default ' ' not null,
  laport      char(2) default ' ' not null,
  latranno    decimal(3,0) default 0 not null,
  lainvprt    decimal(2,0) default 0 not null,
  lalacdte    char(8) default ' ' not null,
  lacancel    char(3) default ' ' not null,
  laward      char(3) default ' ' not null,
  labed       char(3) default ' ' not null,
  ladoctr     char(6) default ' ' not null,
  ladocta     char(6) default ' ' not null,
  ladoctl     char(30) default ' ' not null,
  lasrce      char(3) default ' ' not null,
  ladtype     char(3) default ' ' not null,
  laclss      char(3) default ' ' not null,
  lacare      char(3) default ' ' not null,
  lafundh     char(6) default ' ' not null,
  lafndtb     char(8) default ' ' not null,
  lafndmm     char(10) default ' ' not null,
  laelig      decimal(1,0) default 0 not null,
  lavisit     decimal(1,0) default 0 not null,
  laalerg     decimal(1,0) default 0 not null,
  lailln      decimal(1,0) default 0 not null,
  ladiag1     char(50) default ' ' not null,
  ladiag2     char(50) default ' ' not null,
  ladisc      decimal(8,2) default 0 not null,
  ladoctt     char(6) default ' ' not null,
  laclssft    char(3) default ' ' not null,
  laallow     char(2) default ' ' not null,
  lambs       char(9) default ' ' not null,
  laclaim     char(3) default ' ' not null,
  ladiet      char(3) default ' ' not null,
  laploccr    char(3) default ' ' not null,
  lastay      decimal(3,0) default 0 not null,
  ladyhosp    decimal(3,0) default 0 not null,
  lamemb      decimal(1,0) default 0 not null,
  lamembno    decimal(6,0) default 0 not null,
  lacomm1     char(40) default ' ' not null,
  lacomm2     char(30) default ' ' not null,
  laplur      decimal(1,0) default 0 not null,
  labwght     char(6) default ' ' not null,
  lapurge     decimal(1,0) default 0 not null,
  lausr1      char(3) default ' ' not null,
  lausr2      char(3) default ' ' not null,
  lausr3      char(3) default ' ' not null,
  lausr4      char(3) default ' ' not null,
  lausr5      char(3) default ' ' not null,
  lausr6      char(3) default ' ' not null,
  lausr7      char(3) default ' ' not null,
  lptmiu08    char(3) default ' ' not null,
  lptmiu09    char(3) default ' ' not null,
  lptmiu10    char(3) default ' ' not null,
  lptmiu11    char(3) default ' ' not null,
  ladschi     decimal(1,0) default 0 not null,
  lardrnam    char(22) default ' ' not null,
  lafndyy     char(2) default ' ' not null,
  lafndcg     char(6) default ' ' not null,
  laoccdte    char(8) default ' ' not null,
  lacoddte    char(8) default ' ' not null,
  laretdte    char(8) default ' ' not null,
  ldamumad    decimal(8,0) default 0 not null,
  lptmipdr    char(9) default ' ' not null,
  lptmigst    char(1) default ' ' not null,
  lptmieoc    char(8) default ' ' not null,
  lptmislo    char(3) default ' ' not null,
  lptmiscl    char(3) default ' ' not null,
  lptmistr    char(3) default ' ' not null,
  lptmicmx    char(1) default ' ' not null,
  lptmidfa    char(8) default ' ' not null,
  lptmiint    char(1) default ' ' not null,
  lptmipre    char(3) default ' ' not null,
  lptmipsf    char(1) default ' ' not null,
  lptmipsr    char(2) default ' ' not null,
  lptmiqas    char(12) default ' ' not null,
  lptmihfs    char(40) default ' ' not null,
  lptmihfg    char(28) default ' ' not null,
  lptmifup    char(2) default ' ' not null,
  lf          char(1)
);
create unique index legmiss1 on legmissf
(
dlaadmno
);
create unique index legmiss2 on legmissf
(
dlastat,
dlaadmno
);
create unique index legmiss3 on legmissf
(
ladate,
dlaadmno
);
create unique index legmiss4 on legmissf
(
dlastat,
ladocta,
laward,
labed,
dlaadmno
);
create unique index legmiss5 on legmissf
(
dlastat,
laward,
ladate,
dlaadmno
);
create unique index legmiss6 on legmissf
(
laurno,
dlaadmno
);
revoke all on legmissf from public ; 
grant select on legmissf to public ; 
