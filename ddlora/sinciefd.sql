create table sinaudie
(
  siieaudd    varchar2(8) default ' ' not null,
  siieaudt    varchar2(8) default ' ' not null,
  siieaudp    varchar2(2) default ' ' not null,
  siieaudr    varchar2(1) default ' ' not null,
  siieauds    number(1,0) default 0 not null,
  siieaudo    varchar2(4) default ' ' not null,
  siiecat     varchar2(7) default ' ' not null,
  siiewar     varchar2(5) default ' ' not null,
  siiesid     varchar2(6) default ' ' not null,
  siieras     varchar2(8) default ' ' not null,
  siiesoh     number(14,2) default 0 not null,
  siiesoo     number(14,2) default 0 not null,
  siieroq     number(14,2) default 0 not null,
  siierol     number(14,2) default 0 not null,
  siiesti     number(1,0) default 0 not null,
  siiestd     varchar2(8) default ' ' not null,
  siiesic     number(1,0) default 0 not null,
  siiesab     number(1,0) default 0 not null,
  siieabc     varchar2(1) default ' ' not null,
  siiesus     number(1,0) default 0 not null,
  siieur1     varchar2(15) default ' ' not null,
  siieur2     varchar2(15) default ' ' not null,
  siieuc1     varchar2(3) default ' ' not null,
  siieuc2     varchar2(3) default ' ' not null,
  siieud1     varchar2(8) default ' ' not null,
  siieud2     varchar2(8) default ' ' not null,
  siieuy1     varchar2(1) default ' ' not null,
  siieuy2     varchar2(1) default ' ' not null,
  siiespa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudie on sinaudie
(
siieaudd,
siieaudt,
siieaudp,
siieaudr
)
tablespace pas_indx; 
create table sincieaf
(
  siiecat     varchar2(7) default ' ' not null,
  siiewar     varchar2(5) default ' ' not null,
  siiesid     varchar2(6) default ' ' not null,
  siieras     varchar2(8) default ' ' not null,
  siiesoh     number(14,2) default 0 not null,
  siiesoo     number(14,2) default 0 not null,
  siieroq     number(14,2) default 0 not null,
  siierol     number(14,2) default 0 not null,
  siiesti     number(1,0) default 0 not null,
  siiestd     varchar2(8) default ' ' not null,
  siiesic     number(1,0) default 0 not null,
  siiesab     number(1,0) default 0 not null,
  siieabc     varchar2(1) default ' ' not null,
  siiesus     number(1,0) default 0 not null,
  siieur1     varchar2(15) default ' ' not null,
  siieur2     varchar2(15) default ' ' not null,
  siieuc1     varchar2(3) default ' ' not null,
  siieuc2     varchar2(3) default ' ' not null,
  siieud1     varchar2(8) default ' ' not null,
  siieud2     varchar2(8) default ' ' not null,
  siieuy1     varchar2(1) default ' ' not null,
  siieuy2     varchar2(1) default ' ' not null,
  siiespa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinciea1 primary key( 
siiecat,
siiewar)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinciea2 on sincieaf
(
siiewar,
siiecat
)
  tablespace pas_indx; 
create  index sinciea3 on sincieaf
(
siieras,
siiecat
)
  tablespace pas_indx; 
