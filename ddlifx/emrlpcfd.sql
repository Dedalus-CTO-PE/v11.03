create table emrlpcaf
(
  emlpuni     char(5) default ' ' not null,
  emlpadm     char(8) default ' ' not null,
  emlpurn     char(8) default ' ' not null,
  emlplpn     char(6) default ' ' not null,
  emlpcno     decimal(3,0) default 0 not null,
  emlpstc     char(6) default ' ' not null,
  emlprep     decimal(2,0) default 0 not null,
  emlplty     char(10) default ' ' not null,
  emlpfpn     char(6) default ' ' not null,
  emlppsc     char(4) default ' ' not null,
  emlpspa     char(23) default ' ' not null,
  lf          char(1)
);
create unique index emrlpca1 on emrlpcaf
(
emlpuni
);
revoke all on emrlpcaf from public ; 
grant select on emrlpcaf to public ; 
