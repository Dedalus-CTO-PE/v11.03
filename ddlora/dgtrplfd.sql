create table dgtrplaf
(
  dgrprply    varchar2(3) default ' ' not null,
  dgrpstat    varchar2(5) default ' ' not null,
  dgrperrd    varchar2(50) default ' ' not null,
  dgrppas1    varchar2(50) default ' ' not null,
  dgrppas2    varchar2(50) default ' ' not null,
  dgrppas3    varchar2(50) default ' ' not null,
  dgrpurno    varchar2(8) default ' ' not null,
  dgrpnhsn    varchar2(20) default ' ' not null,
  dgrpdate    varchar2(8) default ' ' not null,
  dgrptime    varchar2(8) default ' ' not null,
  dgrpprog    varchar2(8) default ' ' not null,
  dgrpuser    varchar2(4) default ' ' not null,
  dgrpspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint dgtrpla1 primary key( 
dgrprply,
dgrppas1,
dgrpdate,
dgrptime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
