create table ibabasaf
(
  ibbabasc    char(3) default ' ' not null,
  ibbadesc    char(30) default ' ' not null,
  ibbaactv    decimal(1,0) default 0 not null,
  ibbatype    char(1) default ' ' not null,
  ibbaspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index ibabasa1 on ibabasaf
(
ibbabasc
);
create unique index ibabasa2 on ibabasaf
(
ibbadesc,
ibbabasc
);
revoke all on ibabasaf from public ; 
grant select on ibabasaf to public ; 
