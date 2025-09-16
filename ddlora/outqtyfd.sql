create table outqtyaf
(
  dotqtmes    varchar2(20) default ' ' not null,
  octsite     varchar2(6) default ' ' not null,
  octctyp     varchar2(6) default ' ' not null,
  octgrp      varchar2(3) default ' ' not null,
  octdesc     varchar2(30) default ' ' not null,
  octxbok     varchar2(2) default ' ' not null,
  octxatt     varchar2(2) default ' ' not null,
  octbkt      varchar2(3) default ' ' not null,
  octatt      varchar2(3) default ' ' not null,
  octact      varchar2(1) default ' ' not null,
  octvacs     varchar2(3) default ' ' not null,
  octwunit    varchar2(3) default ' ' not null,
  octusdf1    varchar2(1) default ' ' not null,
  octusdf2    varchar2(1) default ' ' not null,
  otqtspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outqtya1 primary key( 
dotqtmes)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
