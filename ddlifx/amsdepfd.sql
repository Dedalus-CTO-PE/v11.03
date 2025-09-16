create table amsdepaf
(
  amdedep     char(4) default ' ' not null,
  amdedes     char(35) default ' ' not null,
  amdebas     decimal(2,0) default 0 not null,
  amdefrq     decimal(2,0) default 0 not null,
  amderat     decimal(6,2) default 0 not null,
  amdert01    decimal(6,2) default 0 not null,
  amdert02    decimal(6,2) default 0 not null,
  amdert03    decimal(6,2) default 0 not null,
  amdert04    decimal(6,2) default 0 not null,
  amdert05    decimal(6,2) default 0 not null,
  amdert06    decimal(6,2) default 0 not null,
  amdert07    decimal(6,2) default 0 not null,
  amdert08    decimal(6,2) default 0 not null,
  amdert09    decimal(6,2) default 0 not null,
  amdert10    decimal(6,2) default 0 not null,
  amdeur1     char(30) default ' ' not null,
  amdeur2     char(30) default ' ' not null,
  amdeud1     char(8) default ' ' not null,
  amdeud2     char(8) default ' ' not null,
  amdeuy1     char(1) default ' ' not null,
  amdeuy2     char(1) default ' ' not null,
  amdespa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsdepa1 on amsdepaf
(
amdedep
);
revoke all on amsdepaf from public ; 
grant select on amsdepaf to public ; 
