create table hl7pidaf
(
  dpidin01    varchar2(20) default ' ' not null,
  dpidin02    varchar2(2) default ' ' not null,
  pid001      varchar2(4) default ' ' not null,
  pid002      varchar2(20) default ' ' not null,
  pid003      varchar2(20) default ' ' not null,
  pid004      varchar2(20) default ' ' not null,
  pid005      varchar2(48) default ' ' not null,
  pid006      varchar2(48) default ' ' not null,
  pid007      varchar2(26) default ' ' not null,
  pid008      varchar2(2) default ' ' not null,
  pid009      varchar2(48) default ' ' not null,
  pid010      varchar2(2) default ' ' not null,
  pid011      varchar2(106) default ' ' not null,
  pid012      varchar2(4) default ' ' not null,
  pid013      varchar2(40) default ' ' not null,
  pid014      varchar2(40) default ' ' not null,
  pid015      varchar2(60) default ' ' not null,
  pid016      varchar2(2) default ' ' not null,
  pid017      varchar2(3) default ' ' not null,
  pid018      varchar2(20) default ' ' not null,
  pid019      varchar2(16) default ' ' not null,
  pid020      varchar2(25) default ' ' not null,
  pid021      varchar2(20) default ' ' not null,
  pid022      varchar2(3) default ' ' not null,
  pid023      varchar2(60) default ' ' not null,
  pid024      varchar2(2) default ' ' not null,
  pid025      varchar2(2) default ' ' not null,
  pid026      varchar2(4) default ' ' not null,
  pid027      varchar2(60) default ' ' not null,
  pid028      varchar2(80) default ' ' not null,
  pid029      varchar2(26) default ' ' not null,
  pid030      varchar2(2) default ' ' not null,
  pid031      varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7pid01 primary key( 
dpidin01,
dpidin02)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
