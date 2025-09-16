create table pmshpoaf
(
  pmhoatyp    varchar2(3) default ' ' not null,
  pmhoclam    varchar2(3) default ' ' not null,
  pmhofund    varchar2(6) default ' ' not null,
  pmhotabt    varchar2(3) default ' ' not null,
  pmhoedat    varchar2(8) default ' ' not null,
  pmhovtyp    varchar2(3) default ' ' not null,
  pmhomaxo    varchar2(3) default ' ' not null,
  pmhowaro    varchar2(3) default ' ' not null,
  pmhocdat    varchar2(8) default ' ' not null,
  pmhoctim    varchar2(8) default ' ' not null,
  pmhocuid    varchar2(10) default ' ' not null,
  pmhoudat    varchar2(8) default ' ' not null,
  pmhoutim    varchar2(8) default ' ' not null,
  pmhouuid    varchar2(10) default ' ' not null,
  pmhospar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmshpoa1 primary key( 
pmhoatyp,
pmhoclam,
pmhofund,
pmhotabt,
pmhoedat,
pmhovtyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmshpoaf for pmshpoaf;
