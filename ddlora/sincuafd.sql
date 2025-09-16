create table sincuaaf
(
  sicudat     varchar2(8) default ' ' not null,
  sicutim     varchar2(8) default ' ' not null,
  sicuuni     varchar2(2) default ' ' not null,
  sicusup     varchar2(5) default ' ' not null,
  sicucat     varchar2(7) default ' ' not null,
  sicusut     varchar2(15) default ' ' not null,
  sicutyp     number(2,0) default 0 not null,
  sicudes1    varchar2(60) default ' ' not null,
  sicudes2    varchar2(60) default ' ' not null,
  sicuspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sincuaa1 primary key( 
sicudat,
sicutim,
sicuuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sincuaa2 on sincuaaf
(
sicucat,
sicudat,
sicutim,
sicuuni
)
  tablespace pas_indx; 
create unique index sincuaa3 on sincuaaf
(
sicusup,
sicudat,
sicutim,
sicuuni
)
  tablespace pas_indx; 
