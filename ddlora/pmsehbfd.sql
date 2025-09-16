create table pmsehbaf
(
  pmhbuniq    varchar2(20) default ' ' not null,
  pmhbdate    varchar2(8) default ' ' not null,
  pmhbtime    varchar2(8) default ' ' not null,
  pmhbstat    varchar2(1) default ' ' not null,
  pmhbadat    varchar2(8) default ' ' not null,
  pmhburno    varchar2(8) default ' ' not null,
  pmhbvisn    varchar2(8) default ' ' not null,
  pmhbhosp    varchar2(3) default ' ' not null,
  pmhbudat    varchar2(8) default ' ' not null,
  pmhbbtyp    varchar2(3) default ' ' not null,
  pmhbavmo    varchar2(100) default ' ' not null,
  pmhbeaid    varchar2(20) default ' ' not null,
  pmhblddt    varchar2(8) default ' ' not null,
  pmhbldty    varchar2(3) default ' ' not null,
  pmhbutim    varchar2(8) default ' ' not null,
  pmhbwebu    varchar2(10) default ' ' not null,
  pmhbspar    varchar2(200) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsehba1 primary key( 
pmhbuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsehba2 on pmsehbaf
(
pmhbadat,
pmhbhosp,
pmhbstat,
pmhbuniq
)
  tablespace pas_indx; 
create unique index pmsehba3 on pmsehbaf
(
pmhburno,
pmhbadat,
pmhbstat,
pmhbuniq
)
  tablespace pas_indx; 
create unique index pmsehba4 on pmsehbaf
(
pmhbhosp,
pmhbadat,
pmhbstat,
pmhbuniq
)
  tablespace pas_indx; 
create unique index pmsehba5 on pmsehbaf
(
pmhbvisn,
pmhbuniq
)
  tablespace pas_indx; 
create unique index pmsehba6 on pmsehbaf
(
pmhbeaid,
pmhbuniq
)
  tablespace pas_indx; 
create unique index pmsehba7 on pmsehbaf
(
pmhbdate,
pmhbhosp,
pmhbstat,
pmhbuniq
)
  tablespace pas_indx; 
