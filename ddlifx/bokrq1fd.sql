create table bokrq1af
(
  bkrqurno    char(8) default ' ' not null,
  bkrqvisn    char(8) default ' ' not null,
  bkrqbkty    char(3) default ' ' not null,
  bkrqreqn    char(10) default ' ' not null,
  bkrqstat    char(1) default ' ' not null,
  bkrqhosp    char(3) default ' ' not null,
  bkrqprio    char(3) default ' ' not null,
  bkrqsnam    char(40) default ' ' not null,
  bkrqgnam    char(40) default ' ' not null,
  bkrqbdat    char(8) default ' ' not null,
  bkrqgend    char(1) default ' ' not null,
  bkrqrdoc    char(10) default ' ' not null,
  bkrqunit    char(3) default ' ' not null,
  bkrqcsdt    char(8) default ' ' not null,
  bkrqcstm    char(8) default ' ' not null,
  bkrqctct    char(100) default ' ' not null,
  bkrqlocn    char(50) default ' ' not null,
  bkrqadpt    char(3) default ' ' not null,
  bkrqepow    char(3) default ' ' not null,
  bkrqsurg    char(10) default ' ' not null,
  bkrqthet    char(6) default ' ' not null,
  bkrqanae    char(3) default ' ' not null,
  bkrqmbs1    char(9) default ' ' not null,
  bkrqmbs2    char(9) default ' ' not null,
  bkrqmbs3    char(9) default ' ' not null,
  bkrqmbd1    char(80) default ' ' not null,
  bkrqmbd2    char(80) default ' ' not null,
  bkrqmbd3    char(80) default ' ' not null,
  bkrqpror    char(40) default ' ' not null,
  bkrqdura    char(3) default ' ' not null,
  bkrqinfc    char(3) default ' ' not null,
  bkrqequ1    char(3) default ' ' not null,
  bkrqequ2    char(3) default ' ' not null,
  bkrqequ3    char(3) default ' ' not null,
  bkrqcdat    char(8) default ' ' not null,
  bkrqctim    char(8) default ' ' not null,
  bkrqcusr    char(10) default ' ' not null,
  bkrqudat    char(8) default ' ' not null,
  bkrqutim    char(8) default ' ' not null,
  bkrquusr    char(10) default ' ' not null,
  bkrqcndt    char(8) default ' ' not null,
  bkrqcntm    char(8) default ' ' not null,
  bkrqcnus    char(10) default ' ' not null,
  bkrqcncd    char(3) default ' ' not null,
  bkrqopty    char(3) default ' ' not null,
  bkrqtrcd    char(3) default ' ' not null,
  bkrqatcd    char(3) default ' ' not null,
  bkrqatyp    char(3) default ' ' not null,
  bkrqctyp    char(3) default ' ' not null,
  bkrqelos    char(3) default ' ' not null,
  bkrqcty6    char(3) default ' ' not null,
  bkrqcty7    char(3) default ' ' not null,
  bkrqcty8    char(3) default ' ' not null,
  bkrqcty9    char(3) default ' ' not null,
  bkrqasrc    char(3) default ' ' not null,
  bkrqbtyp    char(3) default ' ' not null,
  bkrqelon    char(3) default ' ' not null,
  bkrqcsnt    char(1) default ' ' not null,
  bkrqccdt    char(8) default ' ' not null,
  bkrqspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index bokrq1a1 on bokrq1af
(
bkrqreqn
);
create unique index bokrq1a2 on bokrq1af
(
bkrqurno,
bkrqreqn
);
create unique index bokrq1a3 on bokrq1af
(
bkrqcsdt,
bkrqprio,
bkrqreqn
);
create unique index bokrq1a4 on bokrq1af
(
bkrqcsdt,
bkrqstat,
bkrqreqn
);
create unique index bokrq1a5 on bokrq1af
(
bkrqcdat,
bkrqprio,
bkrqreqn
);
create unique index bokrq1a6 on bokrq1af
(
bkrqcdat,
bkrqstat,
bkrqreqn
);
create unique index bokrq1a7 on bokrq1af
(
bkrqstat,
bkrqthet,
bkrqreqn
);
revoke all on bokrq1af from public ; 
grant select on bokrq1af to public ; 
