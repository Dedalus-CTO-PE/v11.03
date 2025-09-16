create table pmshpgaf
(
  pmhpatyp    varchar2(3) default ' ' not null,
  pmhpclam    varchar2(3) default ' ' not null,
  pmhpfund    varchar2(6) default ' ' not null,
  pmhptabt    varchar2(3) default ' ' not null,
  pmhpedat    varchar2(8) default ' ' not null,
  pmhpmaxi    varchar2(3) default ' ' not null,
  pmhpwari    varchar2(3) default ' ' not null,
  pmhpmaxo    varchar2(3) default ' ' not null,
  pmhpwaro    varchar2(3) default ' ' not null,
  pmhpbrko    varchar2(1) default ' ' not null,
  pmhpcdat    varchar2(8) default ' ' not null,
  pmhpctim    varchar2(8) default ' ' not null,
  pmhpcuid    varchar2(10) default ' ' not null,
  pmhpudat    varchar2(8) default ' ' not null,
  pmhputim    varchar2(8) default ' ' not null,
  pmhpuuid    varchar2(10) default ' ' not null,
  pmhpspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmshpga1 primary key( 
pmhpatyp,
pmhpclam,
pmhpfund,
pmhptabt,
pmhpedat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmshpgaf for pmshpgaf;
