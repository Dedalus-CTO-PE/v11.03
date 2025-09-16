create table ibasmaaf
(
  ibsmnumb    varchar2(3) default ' ' not null,
  ibsmname    varchar2(20) default ' ' not null,
  ibsmnatv    varchar2(20) default ' ' not null,
  ibsmhead    varchar2(35) default ' ' not null,
  ibsmdmpg    varchar2(8) default ' ' not null,
  ibsmaval    varchar2(1) default ' ' not null,
  ibsmspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibasmaa1 primary key( 
ibsmnumb)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
