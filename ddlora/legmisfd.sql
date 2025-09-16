create table legmissf
(
  dlaadmno    varchar2(8) default ' ' not null,
  laurno      varchar2(8) default ' ' not null,
  ladate      varchar2(8) default ' ' not null,
  latime      varchar2(8) default ' ' not null,
  dlastat     varchar2(1) default ' ' not null,
  laport      varchar2(2) default ' ' not null,
  latranno    number(3,0) default 0 not null,
  lainvprt    number(2,0) default 0 not null,
  lalacdte    varchar2(8) default ' ' not null,
  lacancel    varchar2(3) default ' ' not null,
  laward      varchar2(3) default ' ' not null,
  labed       varchar2(3) default ' ' not null,
  ladoctr     varchar2(6) default ' ' not null,
  ladocta     varchar2(6) default ' ' not null,
  ladoctl     varchar2(30) default ' ' not null,
  lasrce      varchar2(3) default ' ' not null,
  ladtype     varchar2(3) default ' ' not null,
  laclss      varchar2(3) default ' ' not null,
  lacare      varchar2(3) default ' ' not null,
  lafundh     varchar2(6) default ' ' not null,
  lafndtb     varchar2(8) default ' ' not null,
  lafndmm     varchar2(10) default ' ' not null,
  laelig      number(1,0) default 0 not null,
  lavisit     number(1,0) default 0 not null,
  laalerg     number(1,0) default 0 not null,
  lailln      number(1,0) default 0 not null,
  ladiag1     varchar2(50) default ' ' not null,
  ladiag2     varchar2(50) default ' ' not null,
  ladisc      number(8,2) default 0 not null,
  ladoctt     varchar2(6) default ' ' not null,
  laclssft    varchar2(3) default ' ' not null,
  laallow     varchar2(2) default ' ' not null,
  lambs       varchar2(9) default ' ' not null,
  laclaim     varchar2(3) default ' ' not null,
  ladiet      varchar2(3) default ' ' not null,
  laploccr    varchar2(3) default ' ' not null,
  lastay      number(3,0) default 0 not null,
  ladyhosp    number(3,0) default 0 not null,
  lamemb      number(1,0) default 0 not null,
  lamembno    number(6,0) default 0 not null,
  lacomm1     varchar2(40) default ' ' not null,
  lacomm2     varchar2(30) default ' ' not null,
  laplur      number(1,0) default 0 not null,
  labwght     varchar2(6) default ' ' not null,
  lapurge     number(1,0) default 0 not null,
  lausr1      varchar2(3) default ' ' not null,
  lausr2      varchar2(3) default ' ' not null,
  lausr3      varchar2(3) default ' ' not null,
  lausr4      varchar2(3) default ' ' not null,
  lausr5      varchar2(3) default ' ' not null,
  lausr6      varchar2(3) default ' ' not null,
  lausr7      varchar2(3) default ' ' not null,
  lptmiu08    varchar2(3) default ' ' not null,
  lptmiu09    varchar2(3) default ' ' not null,
  lptmiu10    varchar2(3) default ' ' not null,
  lptmiu11    varchar2(3) default ' ' not null,
  ladschi     number(1,0) default 0 not null,
  lardrnam    varchar2(22) default ' ' not null,
  lafndyy     varchar2(2) default ' ' not null,
  lafndcg     varchar2(6) default ' ' not null,
  laoccdte    varchar2(8) default ' ' not null,
  lacoddte    varchar2(8) default ' ' not null,
  laretdte    varchar2(8) default ' ' not null,
  ldamumad    number(8,0) default 0 not null,
  lptmipdr    varchar2(9) default ' ' not null,
  lptmigst    varchar2(1) default ' ' not null,
  lptmieoc    varchar2(8) default ' ' not null,
  lptmislo    varchar2(3) default ' ' not null,
  lptmiscl    varchar2(3) default ' ' not null,
  lptmistr    varchar2(3) default ' ' not null,
  lptmicmx    varchar2(1) default ' ' not null,
  lptmidfa    varchar2(8) default ' ' not null,
  lptmiint    varchar2(1) default ' ' not null,
  lptmipre    varchar2(3) default ' ' not null,
  lptmipsf    varchar2(1) default ' ' not null,
  lptmipsr    varchar2(2) default ' ' not null,
  lptmiqas    varchar2(12) default ' ' not null,
  lptmihfs    varchar2(40) default ' ' not null,
  lptmihfg    varchar2(28) default ' ' not null,
  lptmifup    varchar2(2) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legmiss1 primary key( 
dlaadmno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legmiss2 on legmissf
(
dlastat,
dlaadmno
)
  tablespace pas_indx; 
create unique index legmiss3 on legmissf
(
ladate,
dlaadmno
)
  tablespace pas_indx; 
create unique index legmiss4 on legmissf
(
dlastat,
ladocta,
laward,
labed,
dlaadmno
)
  tablespace pas_indx; 
create unique index legmiss5 on legmissf
(
dlastat,
laward,
ladate,
dlaadmno
)
  tablespace pas_indx; 
create unique index legmiss6 on legmissf
(
laurno,
dlaadmno
)
  tablespace pas_indx; 
