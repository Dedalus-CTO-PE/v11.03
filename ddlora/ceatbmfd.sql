create table ceatbmaf
(
  cetbmbs     varchar2(9) default ' ' not null,
  cetbspc     varchar2(3) default ' ' not null,
  cetbpsc     varchar2(7) default ' ' not null,
  cetbpqty    number(8,2) default 0 not null,
  cetbsqty    number(8,2) default 0 not null,
  cetbspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceatbma1 primary key( 
cetbmbs,
cetbspc,
cetbpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
