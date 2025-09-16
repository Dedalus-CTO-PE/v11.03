create table ceatemaf
(
  ceteimp     varchar2(6) default ' ' not null,
  cetespc     varchar2(3) default ' ' not null,
  cetepsc     varchar2(7) default ' ' not null,
  ceteqty     number(8,2) default 0 not null,
  cetespa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceatema1 primary key( 
ceteimp,
cetespc,
cetepsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
