create table outcpbaf
(
  otpbsite    char(6) default ' ' not null,
  otpbctyp    char(6) default ' ' not null,
  otpbprob    char(9) default ' ' not null,
  otpbdesc    char(70) default ' ' not null,
  otpbicdc    char(9) default ' ' not null,
  otpbactv    char(1) default ' ' not null,
  otpbcdat    char(8) default ' ' not null,
  otpbctim    char(8) default ' ' not null,
  otpbcuid    char(10) default ' ' not null,
  otpbudat    char(8) default ' ' not null,
  otpbutim    char(8) default ' ' not null,
  otpbuuid    char(10) default ' ' not null,
  otpbspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index outcpba1 on outcpbaf
(
otpbsite,
otpbctyp,
otpbprob
);
create unique index outcpba2 on outcpbaf
(
otpbsite,
otpbctyp,
otpbdesc,
otpbprob
);
revoke all on outcpbaf from public ; 
grant select on outcpbaf to public ; 
