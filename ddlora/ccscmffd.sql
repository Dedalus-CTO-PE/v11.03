create table ccscmfaf
(
  ccmfhcd     varchar2(2) default ' ' not null,
  ccmffdpt    varchar2(8) default ' ' not null,
  ccmfyear    varchar2(4) default ' ' not null,
  ccmfper     varchar2(2) default ' ' not null,
  ccmftdpt    varchar2(8) default ' ' not null,
  ccmfcty     varchar2(4) default ' ' not null,
  ccmfaty     varchar2(4) default ' ' not null,
  ccmftwg     number(18,6) default 0 not null,
  ccmfwgt     number(18,6) default 0 not null,
  ccmftot     number(14,2) default 0 not null,
  ccmfamt     number(14,2) default 0 not null,
  ccmfspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccscmfa1 primary key( 
ccmfhcd,
ccmffdpt,
ccmfyear,
ccmfper,
ccmftdpt,
ccmfcty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccscmfa2 on ccscmfaf
(
ccmfhcd,
ccmftdpt,
ccmfyear,
ccmfper,
ccmffdpt,
ccmfcty
)
  tablespace pas_indx; 
