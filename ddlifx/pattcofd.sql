create table pattcoaf
(
ptcocode    char(6),
ptcotcom    char(3),
ptcolnum    char(3),
ptcocomm    char(70),
ptcooper    char(4),
ptcodcre    char(8),
ptcolmod    char(8),
ptcotmod    char(8),
ptcomope    char(4),
ptcospar    char(30),
lf          char(1)
);
create unique index pattcoa1 on pattcoaf
(
ptcocode,
ptcotcom,
ptcolnum
);
revoke all on pattcoaf from public ; 
grant select on pattcoaf to public ; 
