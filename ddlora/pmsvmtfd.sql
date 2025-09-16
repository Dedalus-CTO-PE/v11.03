create table pmsvmtaf
(
  pmvmtnam    varchar2(8) default ' ' not null,
  pmvmtidx    varchar2(30) default ' ' not null,
  pmvmmvsi    varchar2(3) default ' ' not null,
  pmvmmcod    varchar2(30) default ' ' not null,
  pmvmmdes    varchar2(100) default ' ' not null,
  pmvmspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsvmta1 primary key( 
pmvmtnam,
pmvmtidx,
pmvmmvsi)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
