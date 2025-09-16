create table ibaescaf
(
  ibespr      char(2) default ' ' not null,
  ibespt      char(3) default ' ' not null,
  ibesseq     char(35) default ' ' not null,
  ibeslas     decimal(1,0) default 0 not null,
  ibesspar    char(3) default ' ' not null,
  lf          char(1)
);
create unique index ibaesca1 on ibaescaf
(
ibespr,
ibespt
);
create unique index ibaesca2 on ibaescaf
(
ibespt,
ibespr
);
revoke all on ibaescaf from public ; 
grant select on ibaescaf to public ; 
