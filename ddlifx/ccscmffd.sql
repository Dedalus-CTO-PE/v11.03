create table ccscmfaf
(
  ccmfhcd     char(2) default ' ' not null,
  ccmffdpt    char(8) default ' ' not null,
  ccmfyear    char(4) default ' ' not null,
  ccmfper     char(2) default ' ' not null,
  ccmftdpt    char(8) default ' ' not null,
  ccmfcty     char(4) default ' ' not null,
  ccmfaty     char(4) default ' ' not null,
  ccmftwg     decimal(18,6) default 0 not null,
  ccmfwgt     decimal(18,6) default 0 not null,
  ccmftot     decimal(14,2) default 0 not null,
  ccmfamt     decimal(14,2) default 0 not null,
  ccmfspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccscmfa1 on ccscmfaf
(
ccmfhcd,
ccmffdpt,
ccmfyear,
ccmfper,
ccmftdpt,
ccmfcty
);
create unique index ccscmfa2 on ccscmfaf
(
ccmfhcd,
ccmftdpt,
ccmfyear,
ccmfper,
ccmffdpt,
ccmfcty
);
revoke all on ccscmfaf from public ; 
grant select on ccscmfaf to public ; 
