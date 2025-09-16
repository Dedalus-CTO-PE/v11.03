create table obspinaf
(
  obpnvisn    varchar2(8) default ' ' not null,
  obpnpdia    varchar2(9) default ' ' not null,
  obpnppro    varchar2(9) default ' ' not null,
  obpnreaa    varchar2(3) default ' ' not null,
  obpnspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obspina1 primary key( 
obpnvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
