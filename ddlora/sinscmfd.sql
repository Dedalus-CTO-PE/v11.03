create table sinscmaf
(
  sisccon     varchar2(10) default ' ' not null,
  siscdes     varchar2(40) default ' ' not null,
  siscsdt     varchar2(8) default ' ' not null,
  siscfi2     varchar2(2) default ' ' not null,
  siscedt     varchar2(8) default ' ' not null,
  siscur1     varchar2(15) default ' ' not null,
  siscur2     varchar2(15) default ' ' not null,
  siscud1     varchar2(8) default ' ' not null,
  siscud2     varchar2(8) default ' ' not null,
  siscuc1     varchar2(3) default ' ' not null,
  siscuc2     varchar2(3) default ' ' not null,
  siscuy1     varchar2(1) default ' ' not null,
  siscuy2     varchar2(1) default ' ' not null,
  siscspa     varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinscma1 primary key( 
sisccon)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
