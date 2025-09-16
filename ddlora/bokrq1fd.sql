create table bokrq1af
(
  bkrqurno    varchar2(8) default ' ' not null,
  bkrqvisn    varchar2(8) default ' ' not null,
  bkrqbkty    varchar2(3) default ' ' not null,
  bkrqreqn    varchar2(10) default ' ' not null,
  bkrqstat    varchar2(1) default ' ' not null,
  bkrqhosp    varchar2(3) default ' ' not null,
  bkrqprio    varchar2(3) default ' ' not null,
  bkrqsnam    varchar2(40) default ' ' not null,
  bkrqgnam    varchar2(40) default ' ' not null,
  bkrqbdat    varchar2(8) default ' ' not null,
  bkrqgend    varchar2(1) default ' ' not null,
  bkrqrdoc    varchar2(10) default ' ' not null,
  bkrqunit    varchar2(3) default ' ' not null,
  bkrqcsdt    varchar2(8) default ' ' not null,
  bkrqcstm    varchar2(8) default ' ' not null,
  bkrqctct    varchar2(100) default ' ' not null,
  bkrqlocn    varchar2(50) default ' ' not null,
  bkrqadpt    varchar2(3) default ' ' not null,
  bkrqepow    varchar2(3) default ' ' not null,
  bkrqsurg    varchar2(10) default ' ' not null,
  bkrqthet    varchar2(6) default ' ' not null,
  bkrqanae    varchar2(3) default ' ' not null,
  bkrqmbs1    varchar2(9) default ' ' not null,
  bkrqmbs2    varchar2(9) default ' ' not null,
  bkrqmbs3    varchar2(9) default ' ' not null,
  bkrqmbd1    varchar2(80) default ' ' not null,
  bkrqmbd2    varchar2(80) default ' ' not null,
  bkrqmbd3    varchar2(80) default ' ' not null,
  bkrqpror    varchar2(40) default ' ' not null,
  bkrqdura    varchar2(3) default ' ' not null,
  bkrqinfc    varchar2(3) default ' ' not null,
  bkrqequ1    varchar2(3) default ' ' not null,
  bkrqequ2    varchar2(3) default ' ' not null,
  bkrqequ3    varchar2(3) default ' ' not null,
  bkrqcdat    varchar2(8) default ' ' not null,
  bkrqctim    varchar2(8) default ' ' not null,
  bkrqcusr    varchar2(10) default ' ' not null,
  bkrqudat    varchar2(8) default ' ' not null,
  bkrqutim    varchar2(8) default ' ' not null,
  bkrquusr    varchar2(10) default ' ' not null,
  bkrqcndt    varchar2(8) default ' ' not null,
  bkrqcntm    varchar2(8) default ' ' not null,
  bkrqcnus    varchar2(10) default ' ' not null,
  bkrqcncd    varchar2(3) default ' ' not null,
  bkrqopty    varchar2(3) default ' ' not null,
  bkrqtrcd    varchar2(3) default ' ' not null,
  bkrqatcd    varchar2(3) default ' ' not null,
  bkrqatyp    varchar2(3) default ' ' not null,
  bkrqctyp    varchar2(3) default ' ' not null,
  bkrqelos    varchar2(3) default ' ' not null,
  bkrqcty6    varchar2(3) default ' ' not null,
  bkrqcty7    varchar2(3) default ' ' not null,
  bkrqcty8    varchar2(3) default ' ' not null,
  bkrqcty9    varchar2(3) default ' ' not null,
  bkrqasrc    varchar2(3) default ' ' not null,
  bkrqbtyp    varchar2(3) default ' ' not null,
  bkrqelon    varchar2(3) default ' ' not null,
  bkrqcsnt    varchar2(1) default ' ' not null,
  bkrqccdt    varchar2(8) default ' ' not null,
  bkrqspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokrq1a1 primary key( 
bkrqreqn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index bokrq1a2 on bokrq1af
(
bkrqurno,
bkrqreqn
)
  tablespace pas_indx; 
create unique index bokrq1a3 on bokrq1af
(
bkrqcdat,
bkrqprio,
bkrqreqn
)
  tablespace pas_indx; 
create unique index bokrq1a4 on bokrq1af
(
bkrqcdat,
bkrqstat,
bkrqreqn
)
  tablespace pas_indx; 
create unique index bokrq1a5 on bokrq1af
(
bkrqstat,
bkrqthet,
bkrqreqn
)
  tablespace pas_indx; 
