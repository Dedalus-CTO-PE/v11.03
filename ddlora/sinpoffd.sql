create table sinaudpf
(
  sipfaudd    varchar2(8) default ' ' not null,
  sipfaudt    varchar2(8) default ' ' not null,
  sipfaudp    varchar2(2) default ' ' not null,
  sipfaudr    varchar2(1) default ' ' not null,
  sipfauds    number(1,0) default 0 not null,
  sipfaudo    varchar2(4) default ' ' not null,
  sipfpon     varchar2(7) default ' ' not null,
  sipfitm     varchar2(3) default ' ' not null,
  sipfrec     varchar2(2) default ' ' not null,
  sipfdat     varchar2(8) default ' ' not null,
  sipfdel     varchar2(15) default ' ' not null,
  sipfqty     number(14,2) default 0 not null,
  sipfcst     number(16,4) default 0 not null,
  sipfgst     number(16,4) default 0 not null,
  sipfsut     varchar2(15) default ' ' not null,
  sipfndd     varchar2(8) default ' ' not null,
  sipfdup     varchar2(8) default ' ' not null,
  sipfudt     varchar2(6) default ' ' not null,
  sipfedd     varchar2(8) default ' ' not null,
  sipfspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index sinaudpf on sinaudpf
(
sipfaudd,
sipfaudt,
sipfaudp,
sipfaudr
)
tablespace pas_indx; 
create table sinpofaf
(
  sipfpon     varchar2(7) default ' ' not null,
  sipfitm     varchar2(3) default ' ' not null,
  sipfrec     varchar2(2) default ' ' not null,
  sipfdat     varchar2(8) default ' ' not null,
  sipfdel     varchar2(15) default ' ' not null,
  sipfqty     number(14,2) default 0 not null,
  sipfcst     number(16,4) default 0 not null,
  sipfgst     number(16,4) default 0 not null,
  sipfsut     varchar2(15) default ' ' not null,
  sipfndd     varchar2(8) default ' ' not null,
  sipfdup     varchar2(8) default ' ' not null,
  sipfudt     varchar2(6) default ' ' not null,
  sipfedd     varchar2(8) default ' ' not null,
  sipfspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinpofa1 primary key( 
sipfpon,
sipfitm,
sipfrec)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinpofa2 on sinpofaf
(
sipfpon,
sipfrec,
sipfitm
)
  tablespace pas_indx; 
create  index sinpofa3 on sinpofaf
(
sipfudt
)
  tablespace pas_indx; 
create unique index sinpofa4 on sinpofaf
(
sipfdat,
sipfpon,
sipfitm,
sipfrec
)
  tablespace pas_indx; 
