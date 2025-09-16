create table ceatamaf
(
  cetaband    varchar2(3) default ' ' not null,
  cetaspc     varchar2(3) default ' ' not null,
  cetapsc     varchar2(7) default ' ' not null,
  cetapqty    number(8,2) default 0 not null,
  cetasqty    number(8,2) default 0 not null,
  cetaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceatama1 primary key( 
cetaband,
cetaspc,
cetapsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
