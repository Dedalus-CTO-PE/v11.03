create table ibagedaf
(
  ibgecode    varchar2(6) default ' ' not null,
  ibgeedat    varchar2(8) default ' ' not null,
  ibgeamnt    number(5,2) default 0 not null,
  ibgespar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibageda1 primary key( 
ibgecode,
ibgeedat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
