create table hl7pidaf
(
  dpidin01    char(20) default ' ' not null,
  dpidin02    char(2) default ' ' not null,
  pid001      char(4) default ' ' not null,
  pid002      char(20) default ' ' not null,
  pid003      char(20) default ' ' not null,
  pid004      char(20) default ' ' not null,
  pid005      char(48) default ' ' not null,
  pid006      char(48) default ' ' not null,
  pid007      char(26) default ' ' not null,
  pid008      char(2) default ' ' not null,
  pid009      char(48) default ' ' not null,
  pid010      char(2) default ' ' not null,
  pid011      char(106) default ' ' not null,
  pid012      char(4) default ' ' not null,
  pid013      char(40) default ' ' not null,
  pid014      char(40) default ' ' not null,
  pid015      char(60) default ' ' not null,
  pid016      char(2) default ' ' not null,
  pid017      char(3) default ' ' not null,
  pid018      char(20) default ' ' not null,
  pid019      char(16) default ' ' not null,
  pid020      char(25) default ' ' not null,
  pid021      char(20) default ' ' not null,
  pid022      char(3) default ' ' not null,
  pid023      char(60) default ' ' not null,
  pid024      char(2) default ' ' not null,
  pid025      char(2) default ' ' not null,
  pid026      char(4) default ' ' not null,
  pid027      char(60) default ' ' not null,
  pid028      char(80) default ' ' not null,
  pid029      char(26) default ' ' not null,
  pid030      char(2) default ' ' not null,
  pid031      char(100) default ' ' not null,
  lf          char(1)
);
create unique index hl7pid01 on hl7pidaf
(
dpidin01,
dpidin02
);
revoke all on hl7pidaf from public ; 
grant select on hl7pidaf to public ; 
