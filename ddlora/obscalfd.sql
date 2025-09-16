create table obscalaf
(
  obclvisn    varchar2(8) default ' ' not null,
  obclcntr    varchar2(3) default ' ' not null,
  obclcall    varchar2(127) default ' ' not null,
  obclspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obscala1 primary key( 
obclvisn,
obclcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
