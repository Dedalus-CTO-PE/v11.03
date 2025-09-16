create table patijrnf
(
ijinvno     char(8),
ijadmno     decimal(8,0),
dijbatch    char(8),
ijspare     char(15),
lf          char(1)
);
create unique index patijrn1 on patijrnf
(
dijbatch,
ijinvno
);
revoke all on patijrnf from public ; 
grant select on patijrnf to public ; 
