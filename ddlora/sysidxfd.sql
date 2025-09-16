create table sysidxaf
(
  syidsys     varchar2(2) default ' ' not null,
  syidfil     varchar2(2) default ' ' not null,
  syididx     varchar2(1) default ' ' not null,
  syiddes     varchar2(35) default ' ' not null,
  syidfl1     varchar2(4) default ' ' not null,
  syidfl2     varchar2(4) default ' ' not null,
  syidfl3     varchar2(4) default ' ' not null,
  syidfl4     varchar2(4) default ' ' not null,
  syidfl5     varchar2(4) default ' ' not null,
  syidfl6     varchar2(4) default ' ' not null,
  syidfl7     varchar2(4) default ' ' not null,
  syidfl8     varchar2(4) default ' ' not null,
  syidiud     varchar2(1) default ' ' not null,
  syidspa     varchar2(79) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sysidxa1 primary key( 
syidsys,
syidfil,
syididx)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
