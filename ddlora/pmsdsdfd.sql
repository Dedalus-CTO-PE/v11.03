create table pmsdsdaf
(
  pmddvisn    varchar2(8) default ' ' not null,
  pmddcpid    varchar2(4) default ' ' not null,
  pmdddate    varchar2(8) default ' ' not null,
  pmddtime    varchar2(8) default ' ' not null,
  pmdddest    varchar2(20) default ' ' not null,
  pmddfaxn    varchar2(20) default ' ' not null,
  pmddcuid    varchar2(10) default ' ' not null,
  pmddhcpc    varchar2(10) default ' ' not null,
  pmddhcpp    varchar2(10) default ' ' not null,
  pmddhcpt    varchar2(2) default ' ' not null,
  pmddfaxs    varchar2(1) default ' ' not null,
  pmddesnt    varchar2(1) default ' ' not null,
  pmddspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsdsda1 primary key( 
pmddvisn,
pmddcpid,
pmdddate,
pmddtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
