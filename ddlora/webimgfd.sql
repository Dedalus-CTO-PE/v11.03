create table webimgaf
(
  wbigfbid    varchar2(3) default ' ' not null,
  wbigarid    varchar2(20) default ' ' not null,
  wbigclid    varchar2(6) default ' ' not null,
  wbigrptc    varchar2(3) default ' ' not null,
  wbigmecn    varchar2(2) default ' ' not null,
  wbigmeid    varchar2(2) default ' ' not null,
  wbigtrid    varchar2(24) default ' ' not null,
  wbigmsid    varchar2(36) default ' ' not null,
  wbigspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webimga1 primary key( 
wbigfbid,
wbigarid,
wbigclid,
wbigrptc,
wbigmecn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webimga2 on webimgaf
(
wbigtrid,
wbigfbid,
wbigarid,
wbigclid,
wbigrptc,
wbigmecn
)
  tablespace pas_indx; 
create unique index webimga3 on webimgaf
(
wbigmsid,
wbigfbid,
wbigarid,
wbigclid,
wbigrptc,
wbigmecn
)
  tablespace pas_indx; 
