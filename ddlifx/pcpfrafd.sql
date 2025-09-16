create table pcpfraaf
(
pcfacode    char(9),
pcfadesc    char(30),
pcfaonce    char(1),
pcfaspar    char(29),
lf          char(1)
);
create unique index pcpfraa1 on pcpfraaf
(
pcfacode
);
create unique index pcpfraa2 on pcpfraaf
(
pcfadesc,
pcfacode
);
revoke all on pcpfraaf from public ; 
grant select on pcpfraaf to public ; 
