create table webimhaf
(
  wbihfbid    varchar2(3) default ' ' not null,
  wbiharid    varchar2(20) default ' ' not null,
  wbihclid    varchar2(6) default ' ' not null,
  wbihrptc    varchar2(3) default ' ' not null,
  wbihmecn    varchar2(2) default ' ' not null,
  wbihsvcn    varchar2(4) default ' ' not null,
  wbihmeid    varchar2(2) default ' ' not null,
  wbihsvid    varchar2(4) default ' ' not null,
  wbihsvac    varchar2(1) default ' ' not null,
  wbihsvbe    varchar2(9) default ' ' not null,
  wbihsvca    varchar2(9) default ' ' not null,
  wbihsvds    varchar2(8) default ' ' not null,
  wbihsvit    varchar2(5) default ' ' not null,
  wbihsvsf    varchar2(9) default ' ' not null,
  wbihsvec    varchar2(4) default ' ' not null,
  wbihsvet    varchar2(80) default ' ' not null,
  wbihtrid    varchar2(24) default ' ' not null,
  wbihmsid    varchar2(36) default ' ' not null,
  wbihspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webimha1 primary key( 
wbihfbid,
wbiharid,
wbihclid,
wbihrptc,
wbihmecn,
wbihsvcn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webimha2 on webimhaf
(
wbihtrid,
wbihfbid,
wbiharid,
wbihclid,
wbihrptc,
wbihmecn,
wbihsvcn
)
  tablespace pas_indx; 
create unique index webimha3 on webimhaf
(
wbihmsid,
wbihfbid,
wbiharid,
wbihclid,
wbihrptc,
wbihmecn,
wbihsvcn
)
  tablespace pas_indx; 
