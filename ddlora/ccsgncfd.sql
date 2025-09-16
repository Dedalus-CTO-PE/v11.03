create table ccsgncaf
(
  ccgnhcd     varchar2(2) default ' ' not null,
  ccgngpc     varchar2(8) default ' ' not null,
  ccgndes     varchar2(35) default ' ' not null,
  ccgnspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsgnca1 primary key( 
ccgnhcd,
ccgngpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
